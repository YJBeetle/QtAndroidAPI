#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Short4 : public JObject
	{
	public:
		// Fields
		jshort w();
		jshort x();
		jshort y();
		jshort z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Short4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Short4(QJniObject obj);
		
		// Constructors
		Short4();
		Short4(jshort arg0, jshort arg1, jshort arg2, jshort arg3);
		
		// Methods
	};
} // namespace android::renderscript

