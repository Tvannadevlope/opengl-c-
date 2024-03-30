#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Set line color to black
    glColor3f(0.0, 0.0, 0.0);

    // Draw the house body
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.5, -0.5); // Bottom left
    glVertex2f(0.5, -0.5);  // Bottom right
    glVertex2f(0.5, 0.5);   // Top right
    glVertex2f(-0.5, 0.5);  // Top left
    glEnd();

    // Draw the roof
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.7, 0.5); // Left vertex bottom
    glVertex2f(0.7, 0.5);  // Right vertex
    glVertex2f(0.5, 0.8);  // Top right
    glVertex2f(-0.5, 0.8); // Top left
    glEnd();

    // Draw the door
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0,-0.5); // Bottom left
    glVertex2f(0.3, -0.5);  // Bottom right
    glVertex2f(0.3, 0.1);   // Top right
    glVertex2f(0.0, 0.1);  // Top left
    glEnd();

    // Draw windows
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, -0.1); // Bottom left
    glVertex2f(-0.1, -0.1);  // Bottom right
    glVertex2f(-0.1, 0);   // Top right
    glVertex2f(-0.4, 0);  // Top left
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, -0.2); // Bottom left
    glVertex2f(-0.1, -0.2);  // Bottom right
    glVertex2f(-0.1, -0.1);   // Top right
    glVertex2f(-0.4, -0.1);  // Top left
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.25, -0.2); // Bottom left
    glVertex2f(-0.25, 0);  // Top left
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set clear color to white
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set orthographic projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Single buffer and RGB color
    glutInitWindowSize(500, 500); // Set window size
    glutCreateWindow("OpenGL House Example"); // Create window with title
    init(); // Initialize OpenGL settings
    glutDisplayFunc(display); // Register display callback function
    glutMainLoop(); // Enter the main event loop
    return 0;
}
