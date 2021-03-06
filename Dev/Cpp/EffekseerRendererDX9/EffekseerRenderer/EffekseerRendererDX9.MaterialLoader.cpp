﻿#include "EffekseerRendererDX9.MaterialLoader.h"
#include "EffekseerRendererDX9.Shader.h"

#ifdef _DEBUG
#include <iostream>
#endif

namespace EffekseerRendererDX9
{

MaterialLoader::MaterialLoader(Renderer* renderer, ::Effekseer::FileInterface* fileInterface) : fileInterface_(fileInterface)
{
	if (fileInterface == nullptr)
	{
		fileInterface_ = &defaultFileInterface_;
	}

	renderer_ = renderer;
	ES_SAFE_ADDREF(renderer_);
}

MaterialLoader ::~MaterialLoader() { ES_SAFE_RELEASE(renderer_); }

::Effekseer::MaterialData* MaterialLoader::Load(const EFK_CHAR* path)
{
	return nullptr;
}

::Effekseer::MaterialData* MaterialLoader::Load(const void* data, int32_t size, Effekseer::MaterialFileType fileType) { return nullptr; }

void MaterialLoader::Unload(::Effekseer::MaterialData* data)
{
}

} // namespace EffekseerRendererDX9