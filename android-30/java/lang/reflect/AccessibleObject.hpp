#pragma once

#include "../../../JObject.hpp"


namespace java::lang::reflect
{
	class AccessibleObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibleObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibleObject(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void setAccessible(jarray arg0, jboolean arg1);
		jboolean canAccess(jobject arg0);
		JObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		JObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		jboolean isAccessible();
		jboolean isAnnotationPresent(jclass arg0);
		void setAccessible(jboolean arg0);
		jboolean trySetAccessible();
	};
} // namespace java::lang::reflect

