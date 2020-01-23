template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterUnityClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; template <> void RegisterUnityClass<BaseVideoTexture>(const char*);
class MovieTexture; 
class WebCamTexture; template <> void RegisterUnityClass<WebCamTexture>(const char*);
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; template <> void RegisterUnityClass<CrashReportManager>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 84 non stripped classes
	//0. Animation
	RegisterUnityClass<Animation>("Animation");
	//1. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. Animator
	RegisterUnityClass<Animator>("Animation");
	//5. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//6. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//7. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//8. Camera
	RegisterUnityClass<Camera>("Core");
	//9. Light
	RegisterUnityClass<Light>("Core");
	//10. Material
	RegisterUnityClass<Material>("Core");
	//11. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//12. Texture
	RegisterUnityClass<Texture>("Core");
	//13. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//14. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//15. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//16. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//17. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//18. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//19. GameObject
	RegisterUnityClass<GameObject>("Core");
	//20. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//21. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//22. GameManager
	RegisterUnityClass<GameManager>("Core");
	//23. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//24. Renderer
	RegisterUnityClass<Renderer>("Core");
	//25. Shader
	RegisterUnityClass<Shader>("Core");
	//26. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//27. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//28. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//29. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//30. Mesh
	RegisterUnityClass<Mesh>("Core");
	//31. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//32. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//33. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//34. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//35. Transform
	RegisterUnityClass<Transform>("Core");
	//36. Sprite
	RegisterUnityClass<Sprite>("Core");
	//37. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//38. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//39. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");
	//40. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//41. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//42. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//43. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//44. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//45. WebCamTexture
	RegisterUnityClass<WebCamTexture>("Audio");
	//46. BaseVideoTexture
	RegisterUnityClass<BaseVideoTexture>("Audio");
	//47. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//48. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//49. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//50. Collider
	RegisterUnityClass<Collider>("Physics");
	//51. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//52. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//53. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//54. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//55. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//56. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//57. TagManager
	RegisterUnityClass<TagManager>("Core");
	//58. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//59. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//60. InputManager
	RegisterUnityClass<InputManager>("Core");
	//61. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//62. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//63. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//64. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//65. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//66. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//67. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//68. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//69. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//70. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//71. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//72. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//73. CrashReportManager
	RegisterUnityClass<CrashReportManager>("CrashReporting");
	//74. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//75. Motion
	RegisterUnityClass<Motion>("Animation");
	//76. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//77. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//78. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//79. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//80. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//81. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//82. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//83. CGProgram
	RegisterUnityClass<CGProgram>("Core");

}
