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
		AccessibleObject(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void setAccessible(JArray arg0, jboolean arg1);
		jboolean canAccess(JObject arg0) const;
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotations() const;
		JArray getAnnotationsByType(JClass arg0) const;
		JObject getDeclaredAnnotation(JClass arg0) const;
		JArray getDeclaredAnnotations() const;
		JArray getDeclaredAnnotationsByType(JClass arg0) const;
		jboolean isAccessible() const;
		jboolean isAnnotationPresent(JClass arg0) const;
		void setAccessible(jboolean arg0) const;
		jboolean trySetAccessible() const;
	};
} // namespace java::lang::reflect

