// Copyright 2001-2016 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include <ImplItem.h>

namespace ACE
{
namespace SDLMixer
{
enum class EImpltemType
{
	Invalid = 0,
	Event,
	Folder,
};

class CImplControl final : public CImplItem
{
public:

	CImplControl() = default;
	CImplControl(string const& name, CID const id, ItemType const type);
};
} // namespace SDLMixer
} // namespace ACE
