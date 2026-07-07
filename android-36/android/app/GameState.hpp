#pragma once

#include "../os/Parcel.def.hpp"
#include "./GameState.def.hpp"

namespace android::app
{
	// Fields
	inline JObject GameState::CREATOR()
	{
		return getStaticObjectField(
			"android.app.GameState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint GameState::MODE_CONTENT()
	{
		return getStaticField<jint>(
			"android.app.GameState",
			"MODE_CONTENT"
		);
	}
	inline jint GameState::MODE_GAMEPLAY_INTERRUPTIBLE()
	{
		return getStaticField<jint>(
			"android.app.GameState",
			"MODE_GAMEPLAY_INTERRUPTIBLE"
		);
	}
	inline jint GameState::MODE_GAMEPLAY_UNINTERRUPTIBLE()
	{
		return getStaticField<jint>(
			"android.app.GameState",
			"MODE_GAMEPLAY_UNINTERRUPTIBLE"
		);
	}
	inline jint GameState::MODE_NONE()
	{
		return getStaticField<jint>(
			"android.app.GameState",
			"MODE_NONE"
		);
	}
	inline jint GameState::MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.GameState",
			"MODE_UNKNOWN"
		);
	}
	
	// Constructors
	inline GameState::GameState(jboolean arg0, jint arg1)
		: JObject(
			"android.app.GameState",
			"(ZI)V",
			arg0,
			arg1
		) {}
	inline GameState::GameState(jboolean arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.app.GameState",
			"(ZIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint GameState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint GameState::getLabel() const
	{
		return callMethod<jint>(
			"getLabel",
			"()I"
		);
	}
	inline jint GameState::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jint GameState::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	inline jboolean GameState::isLoading() const
	{
		return callMethod<jboolean>(
			"isLoading",
			"()Z"
		);
	}
	inline void GameState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
