#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Short2 : public JObject
	{
	public:
		// Fields
		jshort x();
		jshort y();
		
		// QJniObject forward
		template<typename ...Ts> explicit Short2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Short2(QJniObject obj);
		
		// Constructors
		Short2();
		Short2(jshort arg0, jshort arg1);
		
		// Methods
	};
} // namespace android::renderscript

