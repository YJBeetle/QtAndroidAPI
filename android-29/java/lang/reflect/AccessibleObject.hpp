#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::lang::reflect
{
	class AccessibleObject : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibleObject(QAndroidJniObject obj);
		// Constructors
		AccessibleObject() = default;
		
		// Methods
		static void setAccessible(jarray arg0, jboolean arg1);
		jboolean canAccess(jobject arg0);
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		jboolean isAccessible();
		jboolean isAnnotationPresent(jclass arg0);
		void setAccessible(jboolean arg0);
		jboolean trySetAccessible();
	};
} // namespace java::lang::reflect

