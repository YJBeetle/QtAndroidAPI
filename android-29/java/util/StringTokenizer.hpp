#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JObject;
class JString;

namespace java::util
{
	class StringTokenizer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringTokenizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringTokenizer(QJniObject obj);
		
		// Constructors
		StringTokenizer(JString arg0);
		StringTokenizer(JString arg0, JString arg1);
		StringTokenizer(JString arg0, JString arg1, jboolean arg2);
		
		// Methods
		jint countTokens() const;
		jboolean hasMoreElements() const;
		jboolean hasMoreTokens() const;
		JObject nextElement() const;
		JString nextToken() const;
		JString nextToken(JString arg0) const;
	};
} // namespace java::util

