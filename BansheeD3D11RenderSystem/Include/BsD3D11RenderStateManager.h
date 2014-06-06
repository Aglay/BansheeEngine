#pragma once

#include "BsD3D11Prerequisites.h"
#include "BsRenderStateManager.h"

namespace BansheeEngine
{
	class BS_D3D11_EXPORT D3D11RenderStateManager : public RenderStateManager
	{
	protected:
		virtual SamplerStatePtr createSamplerStateImpl() const;
		virtual BlendStatePtr createBlendStateImpl() const;
		virtual RasterizerStatePtr createRasterizerStateImpl() const;
		virtual DepthStencilStatePtr createDepthStencilStateImpl() const;
	};
}