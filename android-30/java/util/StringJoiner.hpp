#pragma once

#include "../../JObject.hpp"


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
		StringJoiner(jstring arg0);
		StringJoiner(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		java::util::StringJoiner add(jstring arg0);
		jint length();
		java::util::StringJoiner merge(java::util::StringJoiner arg0);
		java::util::StringJoiner setEmptyValue(jstring arg0);
		jstring toString();
	};
} // namespace java::util

