#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Long2 : public JObject
	{
	public:
		// Fields
		jlong x();
		jlong y();
		
		// QJniObject forward
		template<typename ...Ts> explicit Long2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Long2(QJniObject obj);
		
		// Constructors
		Long2();
		Long2(jlong arg0, jlong arg1);
		
		// Methods
	};
} // namespace android::renderscript

