#include "sandbox.h"
#include "Chunk.h"
#include "World.h"

bool operator<(glm::vec3&& l, glm::vec3&& other) noexcept
{
	return 1;
}
void Sandbox::place_ent(Engine* eng)
{
//    Entity*  torso = new Entity();
//    Entity*  head = new Entity();
//    Entity*  upperArm1 = new Entity();
//    Entity*  foreArm1 = new Entity();
//    Entity*  upperArm2 = new Entity();
//    Entity*  foreArm2 = new Entity();
//    Entity*  upperLeg1 = new Entity();
//    Entity*  foreLeg1 = new Entity();
//    Entity*  upperLeg2 = new Entity();
//    Entity*  foreLeg2 = new Entity();
//    Model* mod = new Model();
//    Model* lightMod = new Model();
	Chunk::noise =FastNoiseLite();
	Chunk::noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
//	Chunk::noise.SetFractalType(FastNoiseLite::FractalType_FBm);

//	Chunk::noise.SetFractalGain(0.003);
//	Chunk::noise.SetFractalOctaves(4);
//	Chunk::noise.SetCellularJitter(10.07);
//	Chunk::noise.SetFractalWeightedStrength(0.3);
//	Chunk::noise.SetFractalPingPongStrength(0.3);


	Chunk::noise.SetFrequency(0.025f);
//	Chunk::noise.SetSeed(12213);
//	Entity*  box = new Entity();
//	Model* 	boxModel = new Model();
////	std::vector<vec3> a = {vec3(-0.5f, -0.5f, -1.0f), // left
////							vec3(0.5f, -0.5f, -1.0f), // right
////								 vec3(0.0f,  0.5f, 0.0f) };
//	boxModel->meshes.emplace_back();
//	Shader shader("shaders/vertex.glsl", "shaders/fragment.glsl");
//	boxModel->meshes[0].load_obj("res/models/test.obj");
//	boxModel->meshes[0].bind_shader(&shader);
//	boxModel->meshes[0].load_texture("res/textures/wall.jpg");
//	boxModel->meshes[0].shader->use();
//
//	boxModel->meshes[0].bind_texture();
//	boxModel->meshes[0].upload();
//////	box.,
//	eng->add_entity(box);
//	box->set_model(boxModel);

//	Entity*  box = new Entity();
//	Entity*  coin = new Entity();

//
//	Entity*  chunk = new Entity();
//
////	Model* 	boxModel = new Model();
//	Chunk * c = new Chunk(vec3(0,0,0));
//	c->generate();
////	std::vector<vec3> a = {vec3(-0.5f, -0.5f, -1.0f), // left
////							vec3(0.5f, -0.5f, -1.0f), // right
////								 vec3(0.0f,  0.5f, 0.0f) };
////
////	Model* 	coinModel = new Model();
////	boxModel->meshes.emplace_back();
////	coinModel->meshes.emplace_back();
//
//	Shader * shader = new Shader("shaders/SimpleVertex.glsl", "shaders/SimpleFragment.glsl");
//
//
//
//	//	c->model.meshes[0].bind_shader(shader);
////	c->model.meshes[0].shader->use();
////	c->model.meshes[0].upload();
//	eng->add_entity(chunk);
//	chunk->set_model(&c->model);



//	boxModel->meshes[0].load_obj("res/models/test.obj");
//	boxModel->meshes[0].bind_shader(shader);
//	boxModel->meshes[0].load_texture("resources/textures/spritesheet.png");
//	boxModel->meshes[0].shader->use();
//	boxModel->meshes[0].bind_texture();
//	boxModel->meshes[0].upload();
//	box->move_to(-2,0, -1);
//	eng->add_entity(box);
//	box->set_model(boxModel);
//
////	coinModel->meshes[0].load_obj("resources/elf/elf.obj");
//	coinModel->meshes[0].load_obj("res/models/coin.obj");
//	coinModel->meshes[0].bind_shader(shader);
//	coinModel->meshes[0].load_texture("res/textures/wall.jpg");
//	coinModel->meshes[0].shader->use();
//	coinModel->meshes[0].bind_texture();
//	coinModel->meshes[0].upload();
//	eng->add_entity(coin);
//	coin->set_model(coinModel);




//    glm::vec3 lightPositions[] = {
//        glm::vec3(-3.0f,  1.0f, 3.0f),
//        glm::vec3(3.0f,  1.0f, 3.0f),
//        glm::vec3(-3.0f, -1.0f, 3.0f),
//        glm::vec3(3.0f, -1.0f, 3.0f),
//    };
//    glm::vec3 lightColors[] = {
//        glm::vec3(300.0f, 300.0f, 300.0f),
//        glm::vec3(300.0f, 300.0f, 300.0f),
//        glm::vec3(300.0f, 300.0f, 300.0f),
//        glm::vec3(300.0f, 300.0f, 300.0f)
//    };
//    mod->load_obj("res/models/test.obj", true);
//    //mod->set_shader("res/shaders/pbr_vert.glsl", "res/shaders/pbr_frag.glsl");
//    mod->set_shader("res/shaders/stand_vertex.glsl", "res/shaders/stand_fragment.glsl");
//    mod->load_texture("res/textures/wall.jpg");
//
//    lightMod->load_obj("res/models/test.obj", true);
//    lightMod->set_shader("res/shaders/light_vertex.glsl", "res/shaders/light_fragment.glsl");
//
//    torso->set_model(mod);
//    eng->add_entity(torso);
//    torso->set_color(0.9f, 0.0f, 0.0f);
//    torso->move_to(0.0f, 0.0f, 0.0f);
//    torso->scale(0.5f, 1.0f, 0.1f);
//
//    head->set_model(mod);
//    //eng->add_entity(head);
//    head->set_parent(torso);
//    head->set_color(0.0f, 0.0f, 0.7f);
//    head->move_to(0.0f, 0.6f, 0.0f);
//    head->scale(0.2f, 0.2f, 0.2f);
//    head->set_offset(vec3(0.0f, 10.0f, 0.0f));
//
//    upperArm1->set_model(mod);
//    //eng->add_entity(upperArm1);
//    upperArm1->set_parent(torso);
//    upperArm1->set_color(0.1f, 0.8f, 0.1f);
//    upperArm1->move_to(0.5f, 0.5f, 0.0f);
//    upperArm1->scale(0.5f, 0.1f, 0.1f);
//
//    upperArm2->set_model(mod);
//    //eng->add_entity(upperArm2);
//    upperArm2->set_parent(torso);
//    upperArm2->set_color(0.1f, 0.8f, 0.1f);
//    upperArm2->move_to(-0.5f, 0.5f, 0.0f);
//    upperArm2->scale(0.5f, 0.1f, 0.1f);
//
//    foreArm1->set_model(mod);
//    //eng->add_entity(foreArm1);
//    foreArm1->set_parent(upperArm1);
//    foreArm1->set_color(0.8f, 0.8f, 0.1f);
//    foreArm1->move_to(1.0f, 0.5f, 0.0f);
//    foreArm1->scale(0.5f, 0.1f, 0.1f);
//
//    foreArm2->set_model(mod);
//    //eng->add_entity(foreArm2);
//    foreArm2->set_parent(upperArm2);
//    foreArm2->set_color(0.8f, 0.8f, 0.1f);
//    foreArm2->move_to(-1.0f, 0.5f, 0.0f);
//    foreArm2->scale(0.5f, 0.1f, 0.1f);
//
//    upperLeg1->set_model(mod);
//    //eng->add_entity(upperLeg1);
//    upperLeg1->set_parent(torso);
//    upperLeg1->set_color(0.1f, 0.8f, 0.1f);
//    upperLeg1->move_to(0.2f, -0.8f, 0.0f);
//    upperLeg1->scale(0.1f, 0.6f, 0.1f);
//
//    upperLeg2->set_model(mod);
//    //eng->add_entity(upperLeg2);
//    upperLeg2->set_parent(torso);
//    upperLeg2->set_color(0.1f, 0.8f, 0.1f);
//    upperLeg2->move_to(-0.2f, -0.8f, 0.0f);
//    upperLeg2->scale(0.1f, 0.6f, 0.1f);
//
//    foreLeg1->set_model(mod);
//    //eng->add_entity(foreLeg1);
//    foreLeg1->set_parent(upperLeg1);
//    foreLeg1->set_color(0.8f, 0.8f, 0.1f);
//    foreLeg1->move_to(0.2f, -1.4f, 0.0f);
//    foreLeg1->scale(0.1f, 0.6f, 0.1f);
//
//    foreLeg2->set_model(mod);
//    //eng->add_entity(foreLeg2);
//    foreLeg2->set_parent(upperLeg2);
//    foreLeg2->set_color(0.8f, 0.8f, 0.1f);
//    foreLeg2->move_to(-0.2f, -1.4f, 0.0f);
//    foreLeg2->scale(0.1f, 0.6f, 0.1f);
//
//    Entity* light = new Entity();
//    light->set_model(lightMod);
//    eng->add_entity(light);
//    light->move_to(lightPositions[0].x, lightPositions[0].y, lightPositions[0].z);
//    light->scale(0.2f, 0.2f, 0.2f);
//    eng->add_light_source(lightPositions[0], lightColors[0]);
}