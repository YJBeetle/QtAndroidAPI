#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Int4 : public JObject
	{
	public:
		// Fields
		jint w();
		jint x();
		jint y();
		jint z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Int4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Int4(QJniObject obj);
		
		// Constructors
		Int4();
		Int4(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace android::renderscript

