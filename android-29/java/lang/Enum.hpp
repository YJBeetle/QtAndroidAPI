#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JClass;
class JObject;
class JString;
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Enum : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Enum(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Enum(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Enum valueOf(JClass arg0, JString arg1);
		jint compareTo(java::lang::Enum arg0) const;
		jint compareTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		jboolean equals(JObject arg0) const;
		JClass getDeclaringClass() const;
		jint hashCode() const;
		JString name() const;
		jint ordinal() const;
		JString toString() const;
	};
} // namespace java::lang

