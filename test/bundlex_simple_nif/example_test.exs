defmodule BundlexSimpleNifTest do
  use ExUnit.Case

  test "add works" do
    assert 9 = BundlexSimpleNif.Example.add(4, 5)
  end
end
