#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Float4 : public JObject
	{
	public:
		// Fields
		jfloat w();
		jfloat x();
		jfloat y();
		jfloat z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Float4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Float4(QJniObject obj);
		
		// Constructors
		Float4();
		Float4(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
	};
} // namespace android::renderscript

