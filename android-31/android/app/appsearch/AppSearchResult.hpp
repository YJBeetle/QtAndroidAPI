#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch
{
	class AppSearchResult : public JObject
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
		template<typename ...Ts> explicit AppSearchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::appsearch::AppSearchResult newFailedResult(jint arg0, JString arg1);
		static android::app::appsearch::AppSearchResult newSuccessfulResult(JObject arg0);
		jboolean equals(JObject arg0) const;
		JString getErrorMessage() const;
		jint getResultCode() const;
		JObject getResultValue() const;
		jint hashCode() const;
		jboolean isSuccess() const;
		JString toString() const;
	};
} // namespace android::app::appsearch

