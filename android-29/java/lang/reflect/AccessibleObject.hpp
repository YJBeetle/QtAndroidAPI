#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::lang::reflect
{
	class AccessibleObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibleObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibleObject(QAndroidJniObject obj);
		
		// Constructors
		
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

