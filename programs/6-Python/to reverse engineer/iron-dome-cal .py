import math

def calculate_projectile_trajectory(
    initial_velocity_mps: float,  # Initial velocity in meters per second
    launch_angle_degrees: float,  # Launch angle in degrees from the horizontal
    time_step_seconds: float = 0.1, # Time step for calculation in seconds
    max_time_seconds: float = 100.0 # Maximum simulation time in seconds
) -> list[tuple[float, float]]:
    """
    Calculates the trajectory of a projectile under constant gravity.

    Args:
        initial_velocity_mps: The initial speed of the projectile in meters per second.
        launch_angle_degrees: The angle of launch in degrees from the horizontal.
        time_step_seconds: The time interval for each step in the simulation.
        max_time_seconds: The maximum duration to simulate the trajectory.

    Returns:
        A list of (x, y) coordinates representing the projectile's path.
    """

    # Constants
    GRAVITY_ACCELERATION_MPS2 = 9.81  # Acceleration due to gravity (m/s^2)

    # Convert launch angle from degrees to radians
    launch_angle_radians = math.radians(launch_angle_degrees)

    # Calculate initial velocity components
    initial_velocity_x = initial_velocity_mps * math.cos(launch_angle_radians)
    initial_velocity_y = initial_velocity_mps * math.sin(launch_angle_radians)

    trajectory_points = []
    current_time = 0.0
    current_x = 0.0
    current_y = 0.0

    # Simulate the trajectory
    while current_y >= 0 and current_time <= max_time_seconds:
        trajectory_points.append((current_x, current_y))

        # Calculate new position using kinematic equations
        # X-component: x = initial_velocity_x * t
        current_x = initial_velocity_x * current_time

        # Y-component: y = initial_velocity_y * t - 0.5 * g * t^2
        current_y = (initial_velocity_y * current_time) - (0.5 * GRAVITY_ACCELERATION_MPS2 * (current_time ** 2))

        current_time += time_step_seconds

    # Ensure the last point (impact point) is included if it went below zero
    if current_y < 0 and trajectory_points[-1][1] >= 0:
        # A more accurate impact point calculation would involve solving for t when y=0
        # For simplicity, we'll just add the last calculated point even if slightly negative
        trajectory_points.append((current_x, 0.0)) # Assume it hits ground at y=0

    return trajectory_points

# --- Example Usage ---
if __name__ == "__main__":
    # Scenario 1: A simple projectile
    print("--- Scenario 1: Simple Projectile ---")
    initial_speed_1 = 100.0  # m/s
    launch_angle_1 = 45.0    # degrees
    trajectory_1 = calculate_projectile_trajectory(initial_speed_1, launch_angle_1)
    for i, (x, y) in enumerate(trajectory_1[:10]): # Print first 10 points
        print(f"Time {i*0.1:.1f}s: X={x:.2f}m, Y={y:.2f}m")
    print(f"... Total points: {len(trajectory_1)}, Max range: {trajectory_1[-1][0]:.2f}m")
    print("-" * 30)

    # Scenario 2: A flatter trajectory
    print("--- Scenario 2: Flatter Trajectory ---")
    initial_speed_2 = 200.0  # m/s
    launch_angle_2 = 20.0    # degrees
    trajectory_2 = calculate_projectile_trajectory(initial_speed_2, launch_angle_2, time_step_seconds=0.5)
    for i, (x, y) in enumerate(trajectory_2[:10]): # Print first 10 points
        print(f"Time {i*0.5:.1f}s: X={x:.2f}m, Y={y:.2f}m")
    print(f"... Total points: {len(trajectory_2)}, Max range: {trajectory_2[-1][0]:.2f}m")
    print("-" * 30)

    # Scenario 3: High angle trajectory
    print("--- Scenario 3: High Angle Trajectory ---")
    initial_speed_3 = 150.0  # m/s
    launch_angle_3 = 75.0    # degrees
    trajectory_3 = calculate_projectile_trajectory(initial_speed_3, launch_angle_3, max_time_seconds=50)
    for i, (x, y) in enumerate(trajectory_3[:10]): # Print first 10 points
        print(f"Time {i*0.1:.1f}s: X={x:.2f}m, Y={y:.2f}m")
    print(f"... Total points: {len(trajectory_3)}, Max range: {trajectory_3[-1][0]:.2f}m")
    print("-" * 30)
