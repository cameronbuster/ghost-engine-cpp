#include "imgui_impl_glfw.h"
#include "imgui_impl_glfw.cpp"
#include <imgui_impl_opengl3.h>
#include <imgui_impl_opengl3.cpp>

// Setup Dear ImGui context
IMGUI_CHECKVERSION();
ImGui::CreateContext();
ImGuiIO &io = ImGui::GetIO();
// Setup Platform/Renderer bindings
ImGui_ImplGlfw_InitForOpenGL(window, true);
ImGui_ImplOpenGL3_Init(glsl_version);
// Setup Dear ImGui style
ImGui::StyleColorsDark();