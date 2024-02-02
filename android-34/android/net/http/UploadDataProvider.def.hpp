#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class UploadDataSink;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::net::http
{
	class UploadDataProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UploadDataProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UploadDataProvider(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UploadDataProvider();
		
		// Methods
		void close() const;
		jlong getLength() const;
		void read(android::net::http::UploadDataSink arg0, java::nio::ByteBuffer arg1) const;
		void rewind(android::net::http::UploadDataSink arg0) const;
	};
} // namespace android::net::http

