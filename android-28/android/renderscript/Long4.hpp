#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Long4 : public JObject
	{
	public:
		// Fields
		jlong w();
		jlong x();
		jlong y();
		jlong z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Long4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Long4(QJniObject obj);
		
		// Constructors
		Long4();
		Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace android::renderscript

