#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Float3 : public JObject
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Float3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Float3(QJniObject obj);
		
		// Constructors
		Float3();
		Float3(jfloat arg0, jfloat arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::renderscript

