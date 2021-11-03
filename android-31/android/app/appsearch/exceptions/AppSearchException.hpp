#pragma once

#include "../../../../java/lang/Exception.hpp"

namespace android::app::appsearch
{
	class AppSearchResult;
}
class JString;
class JThrowable;

namespace android::app::appsearch::exceptions
{
	class AppSearchException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchException(QAndroidJniObject obj);
		
		// Constructors
		AppSearchException(jint arg0);
		AppSearchException(jint arg0, JString arg1);
		AppSearchException(jint arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jint getResultCode();
		android::app::appsearch::AppSearchResult toAppSearchResult();
	};
} // namespace android::app::appsearch::exceptions

