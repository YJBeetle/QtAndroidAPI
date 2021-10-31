#include "./Charset.hpp"
#include "./StandardCharsets.hpp"

namespace java::nio::charset
{
	// Fields
	QAndroidJniObject StandardCharsets::ISO_8859_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"ISO_8859_1",
			"Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject StandardCharsets::US_ASCII()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"US_ASCII",
			"Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject StandardCharsets::UTF_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16",
			"Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject StandardCharsets::UTF_16BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16BE",
			"Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject StandardCharsets::UTF_16LE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16LE",
			"Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject StandardCharsets::UTF_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_8",
			"Ljava/nio/charset/Charset;"
		);
	}
	
	// QAndroidJniObject forward
	StandardCharsets::StandardCharsets(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::nio::charset

