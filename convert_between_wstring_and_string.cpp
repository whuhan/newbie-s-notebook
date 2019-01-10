std::string fromNative(std::wstring const& in)
{
	  std::wstring_convert<std::codecvt_utf8<wchar_t>> conv1;
    std::string str8 = conv1.to_bytes(in);
	  return str8; 
}

std::wstring toNative(std::string const& in)
{
  std::string str = in;
	std::wstring wstr = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>, wchar_t>{}.from_bytes(str.data());
	return wstr;
}
