#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class Pair : public JObject
	{
	public:
		// Fields
		jobject first();
		jobject second();
		
		// QJniObject forward
		template<typename ...Ts> explicit Pair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Pair(QJniObject obj);
		
		// Constructors
		Pair(jobject arg0, jobject arg1);
		
		// Methods
		static android::util::Pair create(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

