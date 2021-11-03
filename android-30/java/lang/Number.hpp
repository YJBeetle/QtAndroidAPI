#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Number : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Number(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Number(QJniObject obj);
		
		// Constructors
		Number();
		
		// Methods
		jbyte byteValue() const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		jint intValue() const;
		jlong longValue() const;
		jshort shortValue() const;
	};
} // namespace java::lang

