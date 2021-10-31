#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Short4 : public __JniBaseClass
	{
	public:
		// Fields
		jshort w();
		jshort x();
		jshort y();
		jshort z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Short4(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Short4(QJniObject obj);
		
		// Constructors
		Short4();
		Short4(jshort arg0, jshort arg1, jshort arg2, jshort arg3);
		
		// Methods
	};
} // namespace android::renderscript

