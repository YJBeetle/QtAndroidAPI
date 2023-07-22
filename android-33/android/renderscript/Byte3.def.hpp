#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Byte3 : public JObject
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		jbyte z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Byte3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Byte3(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Byte3();
		Byte3(jbyte arg0, jbyte arg1, jbyte arg2);
		
		// Methods
	};
} // namespace android::renderscript

