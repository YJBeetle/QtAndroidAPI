#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class TypeConverter;
}
namespace android::graphics
{
	class Path;
}
namespace android::util
{
	class Property;
}

namespace android::animation
{
	class PropertyValuesHolder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyValuesHolder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyValuesHolder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::animation::PropertyValuesHolder ofFloat(android::util::Property arg0, jfloatArray arg1);
		static android::animation::PropertyValuesHolder ofFloat(jstring arg0, jfloatArray arg1);
		static android::animation::PropertyValuesHolder ofInt(android::util::Property arg0, jintArray arg1);
		static android::animation::PropertyValuesHolder ofInt(jstring arg0, jintArray arg1);
		static android::animation::PropertyValuesHolder ofKeyframe(android::util::Property arg0, jarray arg1);
		static android::animation::PropertyValuesHolder ofKeyframe(jstring arg0, jarray arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(jstring arg0, jarray arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(jstring arg0, android::graphics::Path arg1);
		static android::animation::PropertyValuesHolder ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, JObject arg2, jarray arg3);
		static android::animation::PropertyValuesHolder ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, JObject arg2, jobjectArray arg3);
		static android::animation::PropertyValuesHolder ofMultiInt(jstring arg0, jarray arg1);
		static android::animation::PropertyValuesHolder ofMultiInt(jstring arg0, android::graphics::Path arg1);
		static android::animation::PropertyValuesHolder ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, JObject arg2, jarray arg3);
		static android::animation::PropertyValuesHolder ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, JObject arg2, jobjectArray arg3);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, JObject arg1, jobjectArray arg2);
		static android::animation::PropertyValuesHolder ofObject(jstring arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static android::animation::PropertyValuesHolder ofObject(jstring arg0, JObject arg1, jobjectArray arg2);
		static android::animation::PropertyValuesHolder ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, JObject arg2, jobjectArray arg3);
		android::animation::PropertyValuesHolder clone();
		jstring getPropertyName();
		void setConverter(android::animation::TypeConverter arg0);
		void setEvaluator(JObject arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setKeyframes(jarray arg0);
		void setObjectValues(jobjectArray arg0);
		void setProperty(android::util::Property arg0);
		void setPropertyName(jstring arg0);
		jstring toString();
	};
} // namespace android::animation

