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
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectAnimator(const char *className, const char *sig, Ts...agv) : android::animation::ValueAnimator(className, sig, std::forward<Ts>(agv)...) {}
		ObjectAnimator(QJniObject obj);
		
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
		android::animation::ObjectAnimator clone() const;
		JString getPropertyName() const;
		JObject getTarget() const;
		void setAutoCancel(jboolean arg0) const;
		android::animation::ObjectAnimator setDuration(jlong arg0) const;
		void setFloatValues(JFloatArray arg0) const;
		void setIntValues(JIntArray arg0) const;
		void setObjectValues(JObjectArray arg0) const;
		void setProperty(android::util::Property arg0) const;
		void setPropertyName(JString arg0) const;
		void setTarget(JObject arg0) const;
		void setupEndValues() const;
		void setupStartValues() const;
		void start() const;
		JString toString() const;
	};
} // namespace android::animation

