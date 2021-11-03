#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::text
{
	class CollationKey : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint compareTo(JObject arg0);
		jint compareTo(java::text::CollationKey arg0);
		JString getSourceString();
		JByteArray toByteArray();
	};
} // namespace java::text

