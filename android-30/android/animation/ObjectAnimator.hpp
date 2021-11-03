#pragma once

#include "./ValueAnimator.hpp"

class JFloatArray;
class JIntArray;
class JArray;
class JObjectArray;
class JArray;
class JArray;
namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class TypeConverter;
}
namespace android::animation
{
	class ValueAnimator;
}
namespace android::graphics
{
	class Path;
}
namespace android::util
{
	class Property;
}
class JObject;
class JString;

namespace android::animation
{
	class ObjectAnimator : public android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectAnimator(const char *className, const char *sig, Ts...agv) : android::animation::ValueAnimator(className, sig, std::forward<Ts>(agv)...) {}
		ObjectAnimator(QAndroidJniObject obj);
		
		// Constructors
		ObjectAnimator();
		
		// Methods
		static android::animation::ObjectAnimator ofArgb(JObject arg0, android::util::Property arg1, JIntArray arg2);
		static android::animation::ObjectAnimator ofArgb(JObject arg0, JString arg1, JIntArray arg2);
		static android::animation::ObjectAnimator ofFloat(JObject arg0, android::util::Property arg1, JFloatArray arg2);
		static android::animation::ObjectAnimator ofFloat(JObject arg0, JString arg1, JFloatArray arg2);
		static android::animation::ObjectAnimator ofFloat(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofFloat(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofInt(JObject arg0, android::util::Property arg1, JIntArray arg2);
		static android::animation::ObjectAnimator ofInt(JObject arg0, JString arg1, JIntArray arg2);
		static android::animation::ObjectAnimator ofInt(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofInt(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofMultiFloat(JObject arg0, JString arg1, JArray arg2);
		static android::animation::ObjectAnimator ofMultiFloat(JObject arg0, JString arg1, android::graphics::Path arg2);
		static android::animation::ObjectAnimator ofMultiFloat(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4);
		static android::animation::ObjectAnimator ofMultiInt(JObject arg0, JString arg1, JArray arg2);
		static android::animation::ObjectAnimator ofMultiInt(JObject arg0, JString arg1, android::graphics::Path arg2);
		static android::animation::ObjectAnimator ofMultiInt(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4);
		static android::animation::ObjectAnimator ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofObject(JObject arg0, android::util::Property arg1, JObject arg2, JObjectArray arg3);
		static android::animation::ObjectAnimator ofObject(JObject arg0, JString arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofObject(JObject arg0, JString arg1, JObject arg2, JObjectArray arg3);
		static android::animation::ObjectAnimator ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4);
		static android::animation::ObjectAnimator ofPropertyValuesHolder(JObject arg0, JArray arg1);
		android::animation::ObjectAnimator clone();
		JString getPropertyName();
		JObject getTarget();
		void setAutoCancel(jboolean arg0);
		android::animation::ObjectAnimator setDuration(jlong arg0);
		void setFloatValues(JFloatArray arg0);
		void setIntValues(JIntArray arg0);
		void setObjectValues(JObjectArray arg0);
		void setProperty(android::util::Property arg0);
		void setPropertyName(JString arg0);
		void setTarget(JObject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
		JString toString();
	};
} // namespace android::animation

