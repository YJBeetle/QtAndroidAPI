#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::net::http
{
	class UploadDataSink : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UploadDataSink(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UploadDataSink(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UploadDataSink();
		
		// Methods
		void onReadError(java::lang::Exception arg0) const;
		void onReadSucceeded(jboolean arg0) const;
		void onRewindError(java::lang::Exception arg0) const;
		void onRewindSucceeded() const;
	};
} // namespace android::net::http

