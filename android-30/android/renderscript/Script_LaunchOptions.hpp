#pragma once

#include "./Script_LaunchOptions.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Script_LaunchOptions::Script_LaunchOptions()
		: JObject(
			"android.renderscript.Script$LaunchOptions",
			"()V"
		) {}
	
	// Methods
	inline jint Script_LaunchOptions::getXEnd() const
	{
		return callMethod<jint>(
			"getXEnd",
			"()I"
		);
	}
	inline jint Script_LaunchOptions::getXStart() const
	{
		return callMethod<jint>(
			"getXStart",
			"()I"
		);
	}
	inline jint Script_LaunchOptions::getYEnd() const
	{
		return callMethod<jint>(
			"getYEnd",
			"()I"
		);
	}
	inline jint Script_LaunchOptions::getYStart() const
	{
		return callMethod<jint>(
			"getYStart",
			"()I"
		);
	}
	inline jint Script_LaunchOptions::getZEnd() const
	{
		return callMethod<jint>(
			"getZEnd",
			"()I"
		);
	}
	inline jint Script_LaunchOptions::getZStart() const
	{
		return callMethod<jint>(
			"getZStart",
			"()I"
		);
	}
	inline android::renderscript::Script_LaunchOptions Script_LaunchOptions::setX(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setX",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	inline android::renderscript::Script_LaunchOptions Script_LaunchOptions::setY(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setY",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
	inline android::renderscript::Script_LaunchOptions Script_LaunchOptions::setZ(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setZ",
			"(II)Landroid/renderscript/Script$LaunchOptions;",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

// Base class headers

