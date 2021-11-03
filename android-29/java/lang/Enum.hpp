#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Enum(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Enum(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Enum valueOf(jclass arg0, jstring arg1);
		jint compareTo(java::lang::Enum arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jboolean equals(jobject arg0);
		jclass getDeclaringClass();
		jint hashCode();
		jstring name();
		jint ordinal();
		jstring toString();
	};
} // namespace java::lang

