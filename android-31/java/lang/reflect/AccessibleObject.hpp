#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JClass;
class JObject;
class JString;

namespace java::lang::reflect
{
	class AccessibleObject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibleObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibleObject(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void setAccessible(JArray arg0, jboolean arg1);
		jboolean canAccess(JObject arg0);
		JObject getAnnotation(JClass arg0);
		JArray getAnnotations();
		JArray getAnnotationsByType(JClass arg0);
		JObject getDeclaredAnnotation(JClass arg0);
		JArray getDeclaredAnnotations();
		JArray getDeclaredAnnotationsByType(JClass arg0);
		jboolean isAccessible();
		jboolean isAnnotationPresent(JClass arg0);
		void setAccessible(jboolean arg0);
		jboolean trySetAccessible();
	};
} // namespace java::lang::reflect

