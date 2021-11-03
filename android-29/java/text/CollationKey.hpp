#pragma once

#include "../../JObject.hpp"


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
		jint compareTo(jobject arg0);
		jint compareTo(java::text::CollationKey arg0);
		jstring getSourceString();
		jbyteArray toByteArray();
	};
} // namespace java::text

