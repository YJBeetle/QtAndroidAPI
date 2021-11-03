#pragma once

#include "../../../JObject.hpp"
#include "./Handler.hpp"
#include "./StreamHandler.hpp"

namespace java::io
{
	class File;
}
namespace java::nio::channels
{
	class FileChannel;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class FileHandler : public java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::StreamHandler(className, sig, std::forward<Ts>(agv)...) {}
		FileHandler(QJniObject obj);
		
		// Constructors
		FileHandler();
		FileHandler(jstring arg0);
		FileHandler(jstring arg0, jboolean arg1);
		FileHandler(jstring arg0, jint arg1, jint arg2);
		FileHandler(jstring arg0, jint arg1, jint arg2, jboolean arg3);
		FileHandler(jstring arg0, jlong arg1, jint arg2, jboolean arg3);
		
		// Methods
		void close();
		void publish(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

