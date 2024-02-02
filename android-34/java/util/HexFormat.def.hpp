#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JString;
class JObject;
class JString;

namespace java::util
{
	class HexFormat : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HexFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HexFormat(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint fromHexDigit(jint arg0);
		static jint fromHexDigits(JString arg0);
		static jint fromHexDigits(JString arg0, jint arg1, jint arg2);
		static jlong fromHexDigitsToLong(JString arg0);
		static jlong fromHexDigitsToLong(JString arg0, jint arg1, jint arg2);
		static jboolean isHexDigit(jint arg0);
		static java::util::HexFormat of();
		static java::util::HexFormat ofDelimiter(JString arg0);
		JString delimiter() const;
		jboolean equals(JObject arg0) const;
		JObject formatHex(JObject arg0, JByteArray arg1) const;
		JObject formatHex(JObject arg0, JByteArray arg1, jint arg2, jint arg3) const;
		JString formatHex(JByteArray arg0) const;
		JString formatHex(JByteArray arg0, jint arg1, jint arg2) const;
		jint hashCode() const;
		jboolean isUpperCase() const;
		JByteArray parseHex(JString arg0) const;
		JByteArray parseHex(JCharArray arg0, jint arg1, jint arg2) const;
		JByteArray parseHex(JString arg0, jint arg1, jint arg2) const;
		JString prefix() const;
		JString suffix() const;
		JObject toHexDigits(JObject arg0, jbyte arg1) const;
		JString toHexDigits(jbyte arg0) const;
		JString toHexDigits(jchar arg0) const;
		JString toHexDigits(jint arg0) const;
		JString toHexDigits(jlong arg0) const;
		JString toHexDigits(jshort arg0) const;
		JString toHexDigits(jlong arg0, jint arg1) const;
		jchar toHighHexDigit(jint arg0) const;
		jchar toLowHexDigit(jint arg0) const;
		JString toString() const;
		java::util::HexFormat withDelimiter(JString arg0) const;
		java::util::HexFormat withLowerCase() const;
		java::util::HexFormat withPrefix(JString arg0) const;
		java::util::HexFormat withSuffix(JString arg0) const;
		java::util::HexFormat withUpperCase() const;
	};
} // namespace java::util

