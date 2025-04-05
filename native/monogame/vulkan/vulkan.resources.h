// MonoGame - Copyright (C) The MonoGame Team
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

#ifdef _WIN32
#define C_AlphaTestEffect		7001
#define C_BasicEffect			7002
#define C_DualTextureEffect		7003
#define C_EnvironmentMapEffect	7004
#define C_SkinnedEffect			7005
#define C_SpriteEffect			7006
#elif defined __APPLE__
#define C_AlphaTestEffect       "AlphaTestEffect.vk"
#define C_BasicEffect           "BasicEffect.vk"
#define C_DualTextureEffect     "DualTextureEffect.vk"
#define C_EnvironmentMapEffect  "EnvironmentMapEffect.vk"
#define C_SkinnedEffect         "SkinnedEffect.vk"
#define C_SpriteEffect          "SpriteEffect.vk"
#endif
