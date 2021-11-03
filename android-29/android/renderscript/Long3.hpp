#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Long3 : public JObject
	{
	public:
		// Fields
		jlong x();
		jlong y();
		jlong z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Long3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Long3(QJniObject obj);
		
		// Constructors
		Long3();
		Long3(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::renderscript

