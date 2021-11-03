#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JArray;
class JString;
class JString;

namespace java::util
{
	class StringJoiner : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringJoiner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringJoiner(QJniObject obj);
		
		// Constructors
		StringJoiner(JString arg0);
		StringJoiner(JString arg0, JString arg1, JString arg2);
		
		// Methods
		java::util::StringJoiner add(JString arg0) const;
		jint length() const;
		java::util::StringJoiner merge(java::util::StringJoiner arg0) const;
		java::util::StringJoiner setEmptyValue(JString arg0) const;
		JString toString() const;
	};
} // namespace java::util

