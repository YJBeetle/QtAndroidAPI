#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Short3 : public JObject
	{
	public:
		// Fields
		jshort x();
		jshort y();
		jshort z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Short3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Short3(QJniObject obj);
		
		// Constructors
		Short3();
		Short3(jshort arg0, jshort arg1, jshort arg2);
		
		// Methods
	};
} // namespace android::renderscript

