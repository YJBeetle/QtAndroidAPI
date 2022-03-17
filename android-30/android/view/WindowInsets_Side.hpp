#pragma once

#include "./WindowInsets_Side.def.hpp"

namespace android::view
{
	// Fields
	inline jint WindowInsets_Side::BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"BOTTOM"
		);
	}
	inline jint WindowInsets_Side::LEFT()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"LEFT"
		);
	}
	inline jint WindowInsets_Side::RIGHT()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"RIGHT"
		);
	}
	inline jint WindowInsets_Side::TOP()
	{
		return getStaticField<jint>(
			"android.view.WindowInsets$Side",
			"TOP"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WindowInsets_Side::all()
	{
		return callStaticMethod<jint>(
			"android.view.WindowInsets$Side",
			"all",
			"()I"
		);
	}
} // namespace android::view

// Base class headers

