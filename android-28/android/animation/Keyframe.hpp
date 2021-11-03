#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;

namespace android::animation
{
	class Keyframe : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Keyframe(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Keyframe(QAndroidJniObject obj);
		
		// Constructors
		Keyframe();
		
		// Methods
		static android::animation::Keyframe ofFloat(jfloat arg0);
		static android::animation::Keyframe ofFloat(jfloat arg0, jfloat arg1);
		static android::animation::Keyframe ofInt(jfloat arg0);
		static android::animation::Keyframe ofInt(jfloat arg0, jint arg1);
		static android::animation::Keyframe ofObject(jfloat arg0);
		static android::animation::Keyframe ofObject(jfloat arg0, JObject arg1);
		android::animation::Keyframe clone();
		jfloat getFraction();
		JObject getInterpolator();
		JClass getType();
		JObject getValue();
		jboolean hasValue();
		void setFraction(jfloat arg0);
		void setInterpolator(JObject arg0);
		void setValue(JObject arg0);
	};
} // namespace android::animation

