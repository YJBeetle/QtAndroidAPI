#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PropertyValuesHolder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyValuesHolder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PropertyValuesHolder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject ofFloat(android::util::Property arg0, jfloatArray arg1);
		static QAndroidJniObject ofFloat(jstring arg0, jfloatArray arg1);
		static QAndroidJniObject ofInt(android::util::Property arg0, jintArray arg1);
		static QAndroidJniObject ofInt(jstring arg0, jintArray arg1);
		static QAndroidJniObject ofKeyframe(android::util::Property arg0, jarray arg1);
		static QAndroidJniObject ofKeyframe(jstring arg0, jarray arg1);
		static QAndroidJniObject ofMultiFloat(jstring arg0, jarray arg1);
		static QAndroidJniObject ofMultiFloat(jstring arg0, android::graphics::Path arg1);
		static QAndroidJniObject ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3);
		static QAndroidJniObject ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofMultiInt(jstring arg0, jarray arg1);
		static QAndroidJniObject ofMultiInt(jstring arg0, android::graphics::Path arg1);
		static QAndroidJniObject ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3);
		static QAndroidJniObject ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static QAndroidJniObject ofObject(android::util::Property arg0, __JniBaseClass arg1, jobjectArray arg2);
		static QAndroidJniObject ofObject(jstring arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2);
		static QAndroidJniObject ofObject(jstring arg0, __JniBaseClass arg1, jobjectArray arg2);
		static QAndroidJniObject ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3);
		QAndroidJniObject clone();
		jstring getPropertyName();
		void setConverter(android::animation::TypeConverter arg0);
		void setEvaluator(__JniBaseClass arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setKeyframes(jarray arg0);
		void setObjectValues(jobjectArray arg0);
		void setProperty(android::util::Property arg0);
		void setPropertyName(jstring arg0);
		jstring toString();
	};
} // namespace android::animation

