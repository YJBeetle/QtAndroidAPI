#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class VibrationEffect : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint DEFAULT_AMPLITUDE();
		static jint EFFECT_CLICK();
		static jint EFFECT_DOUBLE_CLICK();
		static jint EFFECT_HEAVY_CLICK();
		static jint EFFECT_TICK();
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationEffect(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VibrationEffect(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::VibrationEffect createOneShot(jlong arg0, jint arg1);
		static android::os::VibrationEffect createPredefined(jint arg0);
		static android::os::VibrationEffect createWaveform(jlongArray arg0, jint arg1);
		static android::os::VibrationEffect createWaveform(jlongArray arg0, jintArray arg1, jint arg2);
		jint describeContents();
	};
} // namespace android::os

