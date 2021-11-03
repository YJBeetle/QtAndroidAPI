#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JLongArray;
namespace android::os
{
	class VibrationEffect_Composition;
}

namespace android::os
{
	class VibrationEffect : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DEFAULT_AMPLITUDE();
		static jint EFFECT_CLICK();
		static jint EFFECT_DOUBLE_CLICK();
		static jint EFFECT_HEAVY_CLICK();
		static jint EFFECT_TICK();
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationEffect(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::VibrationEffect createOneShot(jlong arg0, jint arg1);
		static android::os::VibrationEffect createPredefined(jint arg0);
		static android::os::VibrationEffect createWaveform(JLongArray arg0, jint arg1);
		static android::os::VibrationEffect createWaveform(JLongArray arg0, JIntArray arg1, jint arg2);
		static android::os::VibrationEffect_Composition startComposition();
		jint describeContents();
	};
} // namespace android::os

