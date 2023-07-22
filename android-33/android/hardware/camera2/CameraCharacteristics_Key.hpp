#pragma once

#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CameraCharacteristics_Key.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraCharacteristics_Key::CameraCharacteristics_Key(JString arg0, JClass arg1)
		: JObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	inline jboolean CameraCharacteristics_Key::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CameraCharacteristics_Key::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint CameraCharacteristics_Key::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CameraCharacteristics_Key::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
