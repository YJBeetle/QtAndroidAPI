#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class AppSearchResult : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_INVALID_ARGUMENT();
		static jint RESULT_INVALID_SCHEMA();
		static jint RESULT_IO_ERROR();
		static jint RESULT_NOT_FOUND();
		static jint RESULT_OK();
		static jint RESULT_OUT_OF_SPACE();
		static jint RESULT_SECURITY_ERROR();
		static jint RESULT_UNKNOWN_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::appsearch::AppSearchResult newFailedResult(jint arg0, jstring arg1);
		static android::app::appsearch::AppSearchResult newSuccessfulResult(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getErrorMessage();
		jint getResultCode();
		jobject getResultValue();
		jint hashCode();
		jboolean isSuccess();
		jstring toString();
	};
} // namespace android::app::appsearch

